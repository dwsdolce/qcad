/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RTRACEENTITY_H
#define RTRACEENTITY_H

#include "entity_global.h"

#include "REntity.h"
#include "RTraceData.h"

class RDocument;
class RExporter;

/**
 * Trace entity.
 *
 * \scriptable
 * \sharedPointerSupport
 * \ingroup entity
 */
class QCADENTITY_EXPORT RTraceEntity: public REntity {

public:
    static RPropertyTypeId PropertyCustom;
    static RPropertyTypeId PropertyHandle;
    static RPropertyTypeId PropertyProtected;
    static RPropertyTypeId PropertyWorkingSet;
    static RPropertyTypeId PropertyType;
    static RPropertyTypeId PropertyBlock;
    static RPropertyTypeId PropertyLayer;
    static RPropertyTypeId PropertyLinetype;
    static RPropertyTypeId PropertyLinetypeScale;
    static RPropertyTypeId PropertyLineweight;
    static RPropertyTypeId PropertyColor;
    static RPropertyTypeId PropertyDisplayedColor;
    static RPropertyTypeId PropertyDrawOrder;

    static RPropertyTypeId PropertyPoint1X;
    static RPropertyTypeId PropertyPoint1Y;
    static RPropertyTypeId PropertyPoint1Z;
    static RPropertyTypeId PropertyPoint2X;
    static RPropertyTypeId PropertyPoint2Y;
    static RPropertyTypeId PropertyPoint2Z;
    static RPropertyTypeId PropertyPoint3X;
    static RPropertyTypeId PropertyPoint3Y;
    static RPropertyTypeId PropertyPoint3Z;
    static RPropertyTypeId PropertyPoint4X;
    static RPropertyTypeId PropertyPoint4Y;
    static RPropertyTypeId PropertyPoint4Z;

    static RPropertyTypeId PropertyLength;
    static RPropertyTypeId PropertyTotalLength;

public:
    RTraceEntity(RDocument* document, const RTraceData& data);
    virtual ~RTraceEntity();

    static void init();

    static RS::EntityType getRtti() {
        return RS::EntityTrace;
    }

    static QSet<RPropertyTypeId> getStaticPropertyTypeIds() {
        return RPropertyTypeId::getPropertyTypeIds(RTraceEntity::getRtti());
    }

    virtual QSharedPointer<RObject> clone() const {
        return QSharedPointer<RObject>(new RTraceEntity(*this));
    }

    QSharedPointer<RTraceEntity> cloneToTraceEntity() const {
        return QSharedPointer<RTraceEntity>(new RTraceEntity(*this));
    }

    virtual bool setProperty(RPropertyTypeId propertyTypeId, const QVariant& value,
        RTransaction* transaction=NULL);
    virtual QPair<QVariant, RPropertyAttributes> getProperty(
            RPropertyTypeId& propertyTypeId,
            bool humanReadable = false, bool noAttributes = false, bool showOnRequest = false);

    virtual void exportEntity(RExporter& e, bool preview=false, bool forceSelected=false) const;

    virtual RTraceData& getData() {
        return data;
    }

    virtual const RTraceData& getData() const {
        return data;
    }

    RVector getVertexAt(int i) const {
        return data.getVertexAt(i);
    }

    int countVertices() const {
        return data.countVertices();
    }

    RVector getStartPoint() const {
        return data.getStartPoint();
    }

    RVector getEndPoint() const {
        return data.getEndPoint();
    }

    double getDirection1() const {
        return data.getDirection1();
    }

    double getDirection2() const {
        return data.getDirection2();
    }

    bool reverse() {
        return data.reverse();
    }

    RS::Ending getTrimEnd(const RVector& trimPoint, const RVector& clickPoint) {
        return data.getTrimEnd(trimPoint, clickPoint);
    }

    bool trimStartPoint(const RVector& trimPoint, const RVector& clickPoint = RVector::invalid, bool extend = false) {
        return data.trimStartPoint(trimPoint, clickPoint, extend);
    }
    bool trimEndPoint(const RVector& trimPoint, const RVector& clickPoint = RVector::invalid, bool extend = false) {
        return data.trimEndPoint(trimPoint, clickPoint, extend);
    }

    double getLength() const {
        return data.getLength();
    }

protected:
    virtual void print(QDebug dbg) const;

protected:
    RTraceData data;
};

Q_DECLARE_METATYPE(RTraceEntity*)
Q_DECLARE_METATYPE(QSharedPointer<RTraceEntity>)
Q_DECLARE_METATYPE(QSharedPointer<RTraceEntity>*)

#endif
