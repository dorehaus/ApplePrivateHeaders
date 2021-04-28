/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString, NSArray;

@interface TSCHMultiDataLayerAnimationValues : NSObject {

	CALayer* _layer;
	NSString* _key;
	NSArray* _values;
	NSArray* _keyTimes;
	char _needPresentationLayerValues;

}

@property (nonatomic,readonly) CALayer * layer;                               //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSArray * values;                              //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) NSArray * keyTimes;                            //@synthesize keyTimes=_keyTimes - In the implementation block
@property (nonatomic,readonly) char needPresentationLayerValues;              //@synthesize needPresentationLayerValues=_needPresentationLayerValues - In the implementation block
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(char)arg5 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 ;
-(id)description;
-(NSArray *)values;
-(NSString *)key;
-(CALayer *)layer;
-(NSArray *)keyTimes;
-(id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(char)arg5 ;
-(char)needPresentationLayerValues;
@end

