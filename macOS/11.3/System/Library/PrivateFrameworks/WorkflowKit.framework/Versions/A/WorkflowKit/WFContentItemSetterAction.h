/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFContentItemAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class WFContentProperty, NSArray, NSString;

@interface WFContentItemSetterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (nonatomic,readonly) WFContentProperty * selectedProperty; 
@property (nonatomic,readonly) NSArray * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(id)keywords;
-(NSArray *)properties;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)parameterDefinitions;
-(void)initializeParameters;
-(char)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(char)inputRequired;
-(char)outputsMultipleItems;
-(id)defaultOutputName;
-(id)descriptionSummary;
-(id)inputParameterKey;
-(WFContentProperty *)selectedProperty;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(char)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(char)inputsMultipleItems;
-(id)parameterSummaryDefinition;
-(id)parameterKeyForProperty:(id)arg1 ;
-(id)requiredResourceForProperty:(id)arg1 ;
-(void)setPromptForSelectedParameter;
-(id)displayStringForTransactionModeState:(id)arg1 ;
-(id)changeTransactionWithInput:(id)arg1 ;
-(void)userValueForSelectedPropertyWithCompletion:(/*^block*/id)arg1 ;
-(void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)setAdditionalPropertyIfNecessaryForValue:(id)arg1 ;
@end

