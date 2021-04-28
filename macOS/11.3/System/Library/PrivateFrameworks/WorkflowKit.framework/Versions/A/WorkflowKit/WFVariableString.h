/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying> {

	NSArray* _stringsAndVariables;

}

@property (nonatomic,readonly) NSArray * stringsAndVariables;                               //@synthesize stringsAndVariables=_stringsAndVariables - In the implementation block
@property (nonatomic,readonly) NSArray * variables; 
@property (nonatomic,readonly) NSString * stringByRemovingVariables; 
@property (nonatomic,readonly) NSString * stringByReplacingVariablesWithNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)dictionaryIsSerializedVariableString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithString:(id)arg1 ;
-(id)serializedRepresentation;
-(NSArray *)variables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithVariable:(id)arg1 ;
-(id)initWithStringsAndVariables:(id)arg1 ;
-(id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(/*^block*/id)arg2 ;
-(void)processWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processIntoContentItemsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processIntoStringsAndAttachmentsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)stringByRemovingVariables;
-(NSString *)stringByReplacingVariablesWithNames;
-(NSArray *)stringsAndVariables;
-(id)variablesOfType:(id)arg1 ;
-(char)representsSingleContentVariable;
-(void)addVariableDelegate:(id)arg1 ;
-(void)removeVariableDelegate:(id)arg1 ;
@end

