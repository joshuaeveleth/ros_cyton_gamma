#ifndef ecGeometryTokens_H_
#define ecGeometryTokens_H_
//------------------------------------------------------------------------------
// Copyright (c) 2003-2013 Energid Technologies. All rights reserved.
//
/// @file ecGeometryTokens.h
/// @brief Token definitions for the geometry project
/// @details namespace EcGeom
//
//------------------------------------------------------------------------------
#include <foundation/foundation_config.h>
#include <xml/ecToken.h>

/// Token definitions for the geometry project.
namespace EcGeom
{
   ECTOKEN_DEFINITIONS(EC_FOUNDATION_GEOMETRY_DECL,
      // Namespace for this class.  Used in later definitions.
      (ns, "http://www.energid.com/namespace/mn#")

      (EcAbbMinExtentToken,                       ns + "abbMinExtent")
      (EcAbbMaxExtentToken,                       ns + "abbMaxExtent")
      (EcAxisAlignedBoundingBoxToken,             ns + "axisAlignedBoundingBox")
      (EcBaseShapeDataCacheToken,                 ns + "baseShapeDataCache")
      (EcBoundingBoxToken,                        ns + "boundingBox")  // deprecated (NMT)
      (EcBbTreeHeuristicToken,                    ns + "bbTreeHeuristic")
      (EcBitmapFilenameToken,                     ns + "bitmapFilename")
      (EcBoundingBoxScaleFactorToken,             ns + "boundingBoxScaleFactor")
      (EcBoxExtentsToken,                         ns + "boxExtents")
      (EcBoxToken,                                ns + "box")
      (EcBoxTreeToken,                            ns + "boxTree")
      (EcBricksToken,                             ns + "bricks")
      (EcBrickCellSizeToken,                      ns + "brickCellSize")
      (EcBrickDataFormatToken,                    ns + "brickDataFormat")
      (EcBrickInflectionToken,                    ns + "brickInflection")
      (EcBrickLutScaleToken,                      ns + "brickLutScale")
      (EcBrickLutTableToken,                      ns + "brickLutTable")
      (EcBrickMinSizeToken,                       ns + "brickMinSize")
      (EcBrickMaxSizeToken,                       ns + "brickMaxSize")
      (EcBrickToken,                              ns + "brick")
      (EcBvhToken,                                ns + "bvh")
      (EcBypassDynamicsToken,                     ns + "bypassDynamics")
      (EcCanDeformToken,                          ns + "canDeform")
      (EcCapsuleBoundingVolumeToken,              ns + "capsuleBoundingVolume")
      (EcCapsuleToken,                            ns + "capsule")
      (EcCenterToken,                             ns + "center")
      (EcCircleToken,                             ns + "circle")
      (EcCircularLozengeToken,                    ns + "circularLozenge")
      (EcClosestPointCacheToken,                  ns + "closestPointCache")
      (EcClosestPointIndexShape1Token,            ns + "closestPointIndexShape1")
      (EcClosestPointIndexShape2Token,            ns + "closestPointIndexShape2")
      (EcCollisionNormalToken,                    ns + "collisionNormal")
      (EcCollisionPointPrimaryFrameToken,         ns + "collisionPointPrimaryFrame")
      (EcConsolidatedFlagToken,                   ns + "consolidatedFlag")
      (EcComputeDistanceFlagToken,                ns + "computeDistanceFlag")
      (EcComputeIntersectionVolumeFlagToken,      ns + "computeIntersectionVolumeFlag")
      (EcConeToken,                               ns + "cone")
      (EcCubeRenderSizeToken,                     ns + "cubeRenderSize")
      (EcCuttingPhysicalExtentToken,              ns + "cuttingPhysicalExtent")
      (EcCylinderToken,                           ns + "cylinder")
      (EcDataToken,                               ns + "data")
      (EcDefaultSurfacePropertyToken,             ns + "defaultSurfaceProperty")
      (EcDetailLevelToken,                        ns + "detailLevel")
      (EcDeformableToken,                         ns + "deformable")
      (EcDistanceToken,                           ns + "distance")
      (EcDistanceThresholdToken,                  ns + "distanceThreshold")
      (EcEllipsoidAToken,                         ns + "ellipsoidA")
      (EcEllipsoidBToken,                         ns + "ellipsoidB")
      (EcEllipsoidCToken,                         ns + "ellipsoidC")
      (EcEllipsoidToken,                          ns + "ellipsoid")
      (EcEndpoint0Token,                          ns + "endpoint0")
      (EcEndpoint1Token,                          ns + "endpoint1")
      (EcEndPointIndexToken,                      ns + "endPointIndex")
      (EcExtentUnionToken,                        ns + "extentUnion")
      (EcGeometryOverwriteDescriptorToken,        ns + "geometryOverwriteDescriptor")
      (EcGeomTriangleToken,                       ns + "geometricTriangle")
      (EcGridToken,                               ns + "grid")
      (EcGridPhysicalExtentToken,                 ns + "gridPhysicalExtent")
      (EcHalfSpaceToken,                          ns + "halfSpace")
      (EcHeightToken,                             ns + "height")
      (EcHeightFilenameToken,                     ns + "heightFilename")
      (EcImpactedLinkIdToken,                     ns + "impactedLinkId")
      (EcImpactedManipulatorIdToken,              ns + "impactedManipulatorId")
      (EcImpactedShapeIdToken,                    ns + "impactedShapeId")
      (EcIndicesToken,                            ns + "indices")
      (EcInitializedToken,                        ns + "initialized")
      (EcIntervalIntersectionProcessorToken,      ns + "intervalIntersectionProcessor")
      (EcIsConvexToken,                           ns + "isConvex")
      (EcIsImpactedToken,                         ns + "isImpacted")
      (EcLineToken,                               ns + "line")
      (EcLineAndNeighborsToken,                   ns + "lineAndNeighbors")
      (EcLineSegmentToken,                        ns + "lineSegment")
      (EcLinkCollisionForceToken,                 ns + "linkCollisionForce")
      (EcLozengeMultiplierToken,                  ns + "lozengeMultiplier")
      (EcLozengeMaxRadiusToken,                   ns + "lozengeMaxRadius")
      (EcLozengeToken,                            ns + "lozenge")
      (EcNeighborPairVectorVectorToken,           ns + "neighborPairVectorVector")
      (EcNeighborPolygonsVectorToken,             ns + "neighborPolygonsVector")
      (EcNeighborsAssignedToken,                  ns + "neighborsAssigned")
      (EcNormalIndicesToken,                      ns + "normalIndices")
      (EcNormalsToken,                            ns + "normals")
      (EcNormalsValidatedToken,                   ns + "normalsValidated")
      (EcSouthToNorthSizeToken,                   ns + "southToNorthSize")
      (EcSouthToNorthSpacingToken,                ns + "northToSouthSpacing")
      (EcOriginToken,                             ns + "origin")
      (EcPenetrationDepthToken,                   ns + "penetrationDepth")
      (EcPhysicalExtentToken,                     ns + "physicalExtent")
      (EcPlaneBasePointToken,                     ns + "planeBasePoint")
      (EcPlaneNormalVectorToken,                  ns + "planeNormalVector")
      (EcPlaneToken,                              ns + "plane")
      (EcPointBufferDepthToken,                   ns + "pointBufferDepth")
      (EcPointIndicesToken,                       ns + "pointIndices")
      (EcPointToken,                              ns + "point")
      (EcPointsToken,                             ns + "points")
      (EcPolygonToken,                            ns + "polygon")
      (EcPolygonWithKeyToken,                     ns + "polygonWithKey")
      (EcPolygonsToken,                           ns + "polygons")
      (EcPolygonPhysicalExtentToken,              ns + "polygonPhysicalExtent")
      (EcPrimaryFrameToken,                       ns + "primaryFrame")
      (EcProcessingModeFlagToken,                 ns + "processingMode")
      (EcRadiusToken,                             ns + "radius")
      (EcRadius0Token,                            ns + "radius0")
      (EcRadius1Token,                            ns + "radius1")
      (EcRasterMapPointIndicesToken,              ns + "rasterMapPointIndices")
      (EcRasterMapPointsToken,                    ns + "rasterMapPoints")
      (EcRectangleEdge0Token,                     ns + "rectangleEdge0")
      (EcRectangleEdge1Token,                     ns + "rectangleEdge1")
      (EcRectangleOriginToken,                    ns + "rectangleOrigin")
      (EcRectangleToken,                          ns + "rectangle")
      (EcRenderSubsampleSizeToken,                ns + "renderSubsampleSize")
      (EcShapeCollisionEventToken,                ns + "shapeCollisionEvent")
      (EcShapeContainerToken,                     ns + "shapeContainer")
      (EcShapeIdentifierToken,                    ns + "shapeIdentifier")
      (EcShapeQueryDataToken,                     ns + "shapeQueryData")
      (EcShapeQueryDescriptorToken,               ns + "shapeQueryDescriptor")
      (EcShapeQueryResultToken,                   ns + "shapeQueryResult")
      (EcShapePointEventToken,                    ns + "shapePointEvent")
      (EcShapeProximityDataToken,                 ns + "shapeProximityData")
      (EcShapeProximityDescriptorToken,           ns + "shapeProximityDescriptor")
      (EcShapeSurfaceProperyToken,                ns + "shapeSurfaceProperty")
      (EcShapeUnionToken,                         ns + "shapeUnion")
      (EcShapeVectorToken,                        ns + "shapeVector")
      (EcSphereToken,                             ns + "sphere")
      (EcSimulationSubsampleSizeToken,            ns + "simulationSubsampleSize")
      (EcSupportPointIdToken,                     ns + "supportPointId")
      (EcSurfaceKeyToken,                         ns + "surfaceKey")
      (EcSurfaceKeyPolygonVectorPairVectorToken,  ns + "surfaceKeyPolygonVectorPairVector")
      (EcSurfaceKeyTriangleVectorPairVectorToken, ns + "surfaceKeyTriangleVectorPairVector")
      (EcSurfacePropertyLayersToken,              ns + "surfacePropertyLayers")
      (EcSurfacesToken,                           ns + "surfaces")
      (EcSystemShapeProximityStateToken,          ns + "systemShapeProximityState")
      (EcSystemActiveCollisionStateToken,         ns + "systemActiveCollisionState")
      (EcTerrainToken,                            ns + "terrain")
      (EcTetrahedronEdge1Token,                   ns + "tetrahedronEdge1")
      (EcTetrahedronEdge2Token,                   ns + "tetrahedronEdge2")
      (EcTetrahedronEdge3Token,                   ns + "tetrahedronEdge3")
      (EcTetrahedronToken,                        ns + "tetrahedron")
      (EcTetrahedronV0Token,                      ns + "tetrahedronV0")
      (EcTipPointIndexToken,                      ns + "tipPointIndex")
      (EcTriangleEdge0Token,                      ns + "triangleEdge0")
      (EcTriangleEdge1Token,                      ns + "triangleEdge1")
      (EcTriangleOriginToken,                     ns + "triangleOrigin")
      (EcTriangleToken,                           ns + "triangle")
      (EcTrianglePhysicalExtentToken,             ns + "trianglePhysicalExtent")
      (EcTriangleVectorVectorToken,               ns + "triangleVectorVector")
      (EcTriangularLozengeToken,                  ns + "triangularLozenge")
      (EcTerrainMinXToken,                        ns + "minX")
      (EcTerrainMaxXToken,                        ns + "maxX")
      (EcTerrainMinYToken,                        ns + "minY")
      (EcTerrainMaxYToken,                        ns + "maxY")
      (EcTerrainMinZToken,                        ns + "minZ")
      (EcTerrainMaxZToken,                        ns + "maxZ")
      (EcUnitVectorToken,                         ns + "unitVector")
      (EcUseAABBToken,                            ns + "useAABB")
      (EcWestToEastSizeToken,                     ns + "westToEastSize")
      (EcWestToEastSpacingToken,                  ns + "westToEastSpacing")
   )
}

#endif // ecGeometryTokens_H_