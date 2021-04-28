/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/Versions/A/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapLayout.h>

@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@required
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
-(id)layoutItemForGeotaggable:(id)arg1;

@end


@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout> {

	id<PXPlacesGeotaggedItemDataSource> _dataSource;
	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)layoutItemForGeotaggable:(id)arg1 ;
@end

