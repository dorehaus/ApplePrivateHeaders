/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSCH3DSelectionPathRenderInfo : NSObject {

	NSString* _string;
	unsigned long long _styleIndex;
	double _rotation;

}

@property (nonatomic,readonly) NSString * string;                          //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) unsigned long long styleIndex;              //@synthesize styleIndex=_styleIndex - In the implementation block
@property (nonatomic,readonly) double rotation;                            //@synthesize rotation=_rotation - In the implementation block
+(id)renderInfoWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3 ;
-(NSString *)string;
-(double)rotation;
-(unsigned long long)styleIndex;
-(id)initWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3 ;
@end
