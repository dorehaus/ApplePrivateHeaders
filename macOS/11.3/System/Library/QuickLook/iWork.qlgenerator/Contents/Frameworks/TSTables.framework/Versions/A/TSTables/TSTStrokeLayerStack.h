/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTStrokeLayerAbstractStack.h>

@class TSTStrokeLayer, TSTMutableStrokeLayer;

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack {

	char _isDefaultsOnly;
	TSTStrokeLayer* _defaultStrokeLayer;
	TSTStrokeLayer* _customStrokeLayer;
	TSTMutableStrokeLayer* _clearedStrokeLayer;
	TSTMutableStrokeLayer* _dynamicStrokeLayer;
	TSTMutableStrokeLayer* _spillStrokeLayer;

}

@property (nonatomic,retain) TSTStrokeLayer * defaultStrokeLayer;                      //@synthesize defaultStrokeLayer=_defaultStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTStrokeLayer * customStrokeLayer;                       //@synthesize customStrokeLayer=_customStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTMutableStrokeLayer * clearedStrokeLayer;               //@synthesize clearedStrokeLayer=_clearedStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTMutableStrokeLayer * dynamicStrokeLayer;               //@synthesize dynamicStrokeLayer=_dynamicStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTMutableStrokeLayer * spillStrokeLayer;                 //@synthesize spillStrokeLayer=_spillStrokeLayer - In the implementation block
@property (nonatomic,readonly) char isDefaultsOnly;                                    //@synthesize isDefaultsOnly=_isDefaultsOnly - In the implementation block
@property (nonatomic,readonly) char isEligibleForDefaultsOnlyReplacement; 
+(id)defaultsOnlyStrokeLayerStack;
+(id)strokeLayerStack;
-(unsigned long long)count;
-(char)replaceDefaultStrokeLayerWith:(id)arg1 ;
-(id)p_strokeLayerEnumeration;
-(id)portalledStrokeLayer;
-(TSTStrokeLayer *)defaultStrokeLayer;
-(TSTMutableStrokeLayer *)clearedStrokeLayer;
-(void)setClearedStrokeLayer:(TSTMutableStrokeLayer *)arg1 ;
-(TSTMutableStrokeLayer *)dynamicStrokeLayer;
-(void)setDynamicStrokeLayer:(TSTMutableStrokeLayer *)arg1 ;
-(TSTMutableStrokeLayer *)spillStrokeLayer;
-(void)setSpillStrokeLayer:(TSTMutableStrokeLayer *)arg1 ;
-(void)setDefaultStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(TSTStrokeLayer *)customStrokeLayer;
-(void)setCustomStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(id)replacementWithDefaults;
-(char)isEligibleForDefaultsOnlyReplacement;
-(void)verifyWithExpectedDefaultStrokeLayer:(id)arg1 ;
-(void)insertClearedStrokeAtRange:(TSTSimpleRange)arg1 ;
-(void)insertDynamicStroke:(id)arg1 strokeOrder:(int)arg2 atRange:(TSTSimpleRange)arg3 ;
-(void)insertSpillStroke:(id)arg1 atRange:(TSTSimpleRange)arg2 ;
-(char)hasSpillStrokeInRange:(TSTSimpleRange)arg1 ;
-(char)replaceCustomStrokeLayerWith:(id)arg1 ;
-(void)invalidateCustomStrokes;
-(void)invalidateClearedStrokesInRange:(TSTSimpleRange)arg1 ;
-(void)invalidateDynamicStrokes;
-(void)invalidateDynamicStrokesInRange:(TSTSimpleRange)arg1 ;
-(void)invalidateSpillStrokes;
-(char)isDefaultsOnly;
@end

