/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/Versions/A/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMChatTranscriptLayoutEngineDataSource;
#import <IMSharedUI/IMSharedUI-Structs.h>
@class NSMutableArray, IMChatTranscriptLayoutSpecification, NSArray;

@interface IMChatTranscriptLayoutEngine : NSObject {

	NSMutableArray* _cachedDrawables;
	id<IMChatTranscriptLayoutEngineDataSource> _dataSource;
	IMChatTranscriptLayoutSpecification* _layoutSpecification;
	NSArray* _layoutAttributes;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGSize contentSize;                                                        //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy) NSArray * layoutAttributes;                                                  //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<IMChatTranscriptLayoutEngineDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IMChatTranscriptLayoutSpecification * layoutSpecification;                 //@synthesize layoutSpecification=_layoutSpecification - In the implementation block
-(id)init;
-(id<IMChatTranscriptLayoutEngineDataSource>)dataSource;
-(void)reloadData;
-(void)setDataSource:(id<IMChatTranscriptLayoutEngineDataSource>)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)invalidateLayout;
-(void)prepareLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(NSArray *)layoutAttributes;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(id)drawableAtIndex:(unsigned long long)arg1 ;
-(void)_updateFrames;
-(void)_updateContentSize;
-(void)_invalidateCachedItemData;
-(unsigned long long)_numberOfTranscriptItems;
-(id)_cachedDrawableForTranscriptItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)_spaceForVerticalSpaceDescriptor:(long long)arg1 ;
-(void)_buildLayoutAttributesIfNeeded;
-(id)_makeDrawableForTranscriptItem:(id)arg1 ;
-(id)_cachedDrawableAtIndexOrNil:(unsigned long long)arg1 ;
-(void)setLayoutSpecification:(IMChatTranscriptLayoutSpecification *)arg1 ;
-(void)removeItemsAtIndexPaths:(id)arg1 insertItemsAtIndexPaths:(id)arg2 ;
-(IMChatTranscriptLayoutSpecification *)layoutSpecification;
@end

