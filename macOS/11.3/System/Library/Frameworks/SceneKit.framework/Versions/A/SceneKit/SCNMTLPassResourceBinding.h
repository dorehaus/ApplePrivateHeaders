/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNMTLResourceBinding.h>

@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {

	SCD_Struct_SC153* _inputs;
	C3DFXPassInputRef _samplerInput;
	long long inputsCount;
	long long bufferSize;

}

@property (assign,nonatomic) long long inputsCount; 
@property (assign,nonatomic) long long bufferSize; 
-(void)dealloc;
-(id)init;
-(long long)bufferSize;
-(void)setBufferSize:(long long)arg1 ;
-(long long)inputsCount;
-(void)setInputsCount:(long long)arg1 ;
@end

