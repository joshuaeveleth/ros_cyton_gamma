#ifndef ecBaseAccelerationDataCaptureType_H_
#define ecBaseAccelerationDataCaptureType_H_
//------------------------------------------------------------------------------
// Copyright (c) 2006-2013 Energid Technologies. All rights reserved.
//
/// @file ecBaseAccelerationDataCaptureType.h
/// @class EcBaseAccelerationDataCaptureType
/// @brief A class for capturing base accelerations.
//
//------------------------------------------------------------------------------
#include <actin/actin_config.h>  // Required to be first header.
#include "ecDataCaptureType.h"

/// A class for capturing base accelerations.
class EC_ACTIN_SIMULATIONANALYSIS_DECL EcBaseAccelerationDataCaptureType : public EcDataCaptureType
{
public:
   /// default constructor
   EcBaseAccelerationDataCaptureType
      (
      );

   /// destructor
   virtual ~EcBaseAccelerationDataCaptureType
      (
      );

   /// copy constructor
   EcBaseAccelerationDataCaptureType
      (
      const EcBaseAccelerationDataCaptureType& orig
      );

   /// assignment operator
   EcBaseAccelerationDataCaptureType& operator=
      (
      const EcBaseAccelerationDataCaptureType& orig
      );

   /// equality operator
   EcBoolean operator==
      (
      const EcBaseAccelerationDataCaptureType& orig
      ) const;

   /// return a string token
   virtual const EcToken& token
      (
      ) const;

   /// return a description. This is more human-readable than the token and should be used in GUI in place of the token.
   virtual const EcString& description
      (
      ) const;

   /// capture the data
   virtual EcBoolean captureData
      (
      const EcSystemSimulation& simulation,
      const EcU32&      manipIndex,
      const EcU32&      linkIndex
      ) const;

   /// return the data size.  This will match the number of labels
   virtual const EcU32 dataSize
      (
      ) const;

   /// returns a type
   virtual EcU32 type
      (
      ) const;

   /// clone - a virtual constructor to an EcXmlObject pointer
   virtual EcXmlObject* clone
      (
      ) const;

   /// equality - virtual equality to an EcXmlObject pointer
   virtual EcBoolean equality
      (
      const EcXmlObject* other
      ) const;

   /// virtual new that returns an EcXmlObject
   virtual EcXmlObject* newObject
      (
      ) const;

   /// token for this class
   static const EcToken& classToken
      (
      );

   /// static creator function
   static EcXmlObject* creator
      (
      );

protected:
   static const EcString      m_theDescription;    ///< description
   static const EcU32         m_theDataSize;       ///< data size
};

#endif // ecBaseAccelerationDataCaptureType_H_
