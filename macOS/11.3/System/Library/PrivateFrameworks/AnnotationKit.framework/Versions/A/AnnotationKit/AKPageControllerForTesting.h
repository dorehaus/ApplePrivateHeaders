/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKPageController.h>

@class AKController, AKPageModelController, AKLayerPresentationManager, AKGeometryHelper, NSView;

@interface AKPageControllerForTesting : AKPageController {

	AKController* _testingController;
	unsigned long long _testingPageIndex;
	AKPageModelController* _testingPageModelController;
	AKLayerPresentationManager* _testingLayerPresentationManager;
	AKGeometryHelper* _testingGeometryHelper;
	NSView* _testingOverlayView;

}

@property (retain) AKController * testingController;                                          //@synthesize testingController=_testingController - In the implementation block
@property (assign) unsigned long long testingPageIndex;                                       //@synthesize testingPageIndex=_testingPageIndex - In the implementation block
@property (retain) AKPageModelController * testingPageModelController;                        //@synthesize testingPageModelController=_testingPageModelController - In the implementation block
@property (retain) AKLayerPresentationManager * testingLayerPresentationManager;              //@synthesize testingLayerPresentationManager=_testingLayerPresentationManager - In the implementation block
@property (retain) AKGeometryHelper * testingGeometryHelper;                                  //@synthesize testingGeometryHelper=_testingGeometryHelper - In the implementation block
@property (retain) NSView * testingOverlayView;                                               //@synthesize testingOverlayView=_testingOverlayView - In the implementation block
-(id)init;
-(id)controller;
-(id)overlayView;
-(id)geometryHelper;
-(double)modelBaseScaleFactor;
-(CGPoint)convertPointFromModelToOverlay:(CGPoint)arg1 ;
-(CGRect)convertRectFromModelToOverlay:(CGRect)arg1 ;
-(unsigned long long)pageIndex;
-(id)pageModelController;
-(CGPoint)convertPointFromOverlayToModel:(CGPoint)arg1 ;
-(CGRect)maxPageRect;
-(CGRect)convertRectFromOverlayToModel:(CGRect)arg1 ;
-(id)layerPresentationManager;
-(NSView *)testingOverlayView;
-(void)setTestingOverlayView:(NSView *)arg1 ;
-(AKController *)testingController;
-(unsigned long long)testingPageIndex;
-(AKPageModelController *)testingPageModelController;
-(AKLayerPresentationManager *)testingLayerPresentationManager;
-(AKGeometryHelper *)testingGeometryHelper;
-(void)setTestingController:(AKController *)arg1 ;
-(void)setTestingPageIndex:(unsigned long long)arg1 ;
-(void)setTestingPageModelController:(AKPageModelController *)arg1 ;
-(void)setTestingLayerPresentationManager:(AKLayerPresentationManager *)arg1 ;
-(void)setTestingGeometryHelper:(AKGeometryHelper *)arg1 ;
@end

