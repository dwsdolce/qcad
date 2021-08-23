// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAENTITY_H
        #define RECMAENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REntity.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPointType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isComplex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDimension
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isTextBased
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSane
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelectedWorkingSet
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSelectedWorkingSet
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isUpdatesEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUpdatesEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        cloneOnChange
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDrawOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDrawOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getParentId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineweightInUnits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDisplayColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        copyAttributesFrom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setZ
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBoxes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHull
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestSubEntityId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestSimpleShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInside
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOnEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInternalReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointOnEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestPointOnEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsWithShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clickReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scaleNonUniform
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scaleVisualProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewportContext
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAutoUpdatesBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEditable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInWorkingSet
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getComplexity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static REntity* getSelf(const QString& fName, QScriptContext* context)
    ;static REntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    