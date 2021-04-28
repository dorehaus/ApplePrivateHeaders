/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject {

	AXMAudioDataSource* _inputSource;

}

@property (assign,nonatomic,__weak) AXMAudioDataSource * inputSource;              //@synthesize inputSource=_inputSource - In the implementation block
-(AXMAudioDataSource *)inputSource;
-(void)processSamples:(unsigned long long)arg1 ;
-(void)setInputSource:(AXMAudioDataSource *)arg1 ;
@end

