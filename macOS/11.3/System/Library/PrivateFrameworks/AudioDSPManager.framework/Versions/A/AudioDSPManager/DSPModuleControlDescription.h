/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface DSPModuleControlDescription : NSObject {

	NSString* _name;
	NSString* _value;
	NSArray* _inputIOStreamIndices;
	NSArray* _outputIOStreamIndices;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * value;                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSArray * inputIOStreamIndices;               //@synthesize inputIOStreamIndices=_inputIOStreamIndices - In the implementation block
@property (nonatomic,readonly) NSArray * outputIOStreamIndices;              //@synthesize outputIOStreamIndices=_outputIOStreamIndices - In the implementation block
-(NSString *)name;
-(NSString *)value;
-(id)initWithName:(id)arg1 value:(id)arg2 inputIOStreamIndices:(id)arg3 outputIOStreamIndices:(id)arg4 ;
-(NSArray *)inputIOStreamIndices;
-(NSArray *)outputIOStreamIndices;
@end
