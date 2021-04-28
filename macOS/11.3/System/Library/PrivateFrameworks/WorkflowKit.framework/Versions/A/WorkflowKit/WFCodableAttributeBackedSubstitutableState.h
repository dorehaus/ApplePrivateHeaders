/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class INCodableAttribute, INStringLocalizer, NSString;

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState {

	INCodableAttribute* _codableAttribute;
	INStringLocalizer* _stringLocalizer;
	NSString* _readableTitle;
	NSString* _readableSubtitle;

}

@property (nonatomic,readonly) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,readonly) INStringLocalizer * stringLocalizer;                //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
@property (nonatomic,copy) NSString * readableTitle;                               //@synthesize readableTitle=_readableTitle - In the implementation block
@property (nonatomic,copy) NSString * readableSubtitle;                            //@synthesize readableSubtitle=_readableSubtitle - In the implementation block
+(id)processingValueClasses;
-(id)serializedRepresentation;
-(INCodableAttribute *)codableAttribute;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(INStringLocalizer *)stringLocalizer;
-(NSString *)readableTitle;
-(NSString *)readableSubtitle;
-(id)initWithValue:(id)arg1 codableAttribute:(id)arg2 stringLocalizer:(id)arg3 ;
-(void)setReadableTitle:(NSString *)arg1 ;
-(void)setReadableSubtitle:(NSString *)arg1 ;
@end

