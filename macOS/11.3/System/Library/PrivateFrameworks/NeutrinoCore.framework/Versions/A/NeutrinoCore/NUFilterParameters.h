/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface NUFilterParameters : NSObject {

	NSDictionary* _inputNodes;
	NSDictionary* _settings;

}

@property (copy) NSDictionary * inputNodes;              //@synthesize inputNodes=_inputNodes - In the implementation block
@property (copy) NSDictionary * settings;                //@synthesize settings=_settings - In the implementation block
-(id)description;
-(id)init;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)inputNodes;
-(void)setInputNodes:(NSDictionary *)arg1 ;
@end
