/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNProgram, NSDictionary, NSArray, NSMutableArray;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {

	id _owner;
	SCNProgram* _program;
	NSDictionary* _shaderModifiers;
	NSArray* _c3dShaderModifierCache;
	NSMutableArray* _argumentsNames;
	NSDictionary* _symbolToBinder;
	NSDictionary* _symbolToUnbinder;

}

@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,readonly) id owner; 
@property (nonatomic,readonly) NSArray * shaderModifiersArgumentsNames; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)owner;
-(id)initWithOwner:(id)arg1 ;
-(char)isOpaque;
-(void)_commonInit;
-(void)setProgram:(SCNProgram *)arg1 ;
-(SCNProgram *)program;
-(void)_programDidChange:(id)arg1 ;
-(C3DFXGLSLProgramRef)_programFromPassAtIndex:(long long)arg1 ;
-(const void*)__CFObject;
-(C3DFXTechniqueRef)_technique;
-(void)ownerWillDie;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(NSDictionary *)shaderModifiers;
-(void)copyModifiersFrom:(id)arg1 ;
-(NSArray *)shaderModifiersArgumentsNames;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_stopObservingProgram;
-(void)_setC3DProgram;
-(void)_startObservingProgram;
-(void)_parseAndSetShaderModifier:(id)arg1 ;
-(void)_updateC3DProgramInputForSymbol:(id)arg1 ;
-(void)_updateC3DProgramInput:(C3DFXGLSLProgramRef)arg1 forSymbol:(id)arg2 ;
-(void)_updateAllC3DProgramInputs;
-(void)_setC3DProgramDelegate;
-(void)_customEncodingOfSCNShadableHelper:(id)arg1 ;
-(void)_customDecodingOfSCNShadableHelper:(id)arg1 ;
-(void)_didDecodeSCNShadableHelper:(id)arg1 ;
-(char)_bindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
-(void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
@end
