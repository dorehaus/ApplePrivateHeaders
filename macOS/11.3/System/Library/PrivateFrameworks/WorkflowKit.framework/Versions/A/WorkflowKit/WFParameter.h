/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString, NSDictionary, WFResourceManager, NSHashTable;

@interface WFParameter : NSObject {

	char _hidden;
	char _doNotLocalizeValues;
	char _insideWorkflow;
	char _allowsMultipleValues;
	char _fixedSizeArray;
	char _shouldAlignLabels;
	NSSet* _supportedVariableTypes;
	NSString* _localizedPrompt;
	NSDictionary* _arraySizesBySizeClass;
	NSString* _key;
	NSString* _legacyKey;
	NSString* _localizedLabel;
	NSString* _localizedPlaceholder;
	NSString* _localizedDescription;
	id _defaultSerializedRepresentation;
	WFResourceManager* _resourceManager;
	NSString* _importQuestionBehavior;
	NSString* _intentSlotName;
	NSSet* _disallowedVariableTypes;
	NSDictionary* _definition;
	NSHashTable* _eventObservers;
	NSSet* _defaultSupportedVariableTypes;

}

@property (nonatomic,readonly) NSSet * disallowedVariableTypes;                          //@synthesize disallowedVariableTypes=_disallowedVariableTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * definition;                           //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSHashTable * eventObservers;                             //@synthesize eventObservers=_eventObservers - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) char displaysMultipleValueEditor; 
@property (nonatomic,readonly) NSSet * defaultSupportedVariableTypes;                    //@synthesize defaultSupportedVariableTypes=_defaultSupportedVariableTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * arraySizesBySizeClass;                //@synthesize arraySizesBySizeClass=_arraySizesBySizeClass - In the implementation block
@property (nonatomic,copy) NSString * localizedPlaceholder;                              //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * localizedPrompt;                                   //@synthesize localizedPrompt=_localizedPrompt - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyKey;                                //@synthesize legacyKey=_legacyKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabel;                           //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) char doNotLocalizeValues;                                 //@synthesize doNotLocalizeValues=_doNotLocalizeValues - In the implementation block
@property (nonatomic,readonly) NSSet * supportedVariableTypes;                           //@synthesize supportedVariableTypes=_supportedVariableTypes - In the implementation block
@property (nonatomic,copy,readonly) id defaultSerializedRepresentation;                  //@synthesize defaultSerializedRepresentation=_defaultSerializedRepresentation - In the implementation block
@property (nonatomic,readonly) WFResourceManager * resourceManager;                      //@synthesize resourceManager=_resourceManager - In the implementation block
@property (getter=isInsideWorkflow,nonatomic,readonly) char insideWorkflow;              //@synthesize insideWorkflow=_insideWorkflow - In the implementation block
@property (nonatomic,readonly) NSString * importQuestionBehavior;                        //@synthesize importQuestionBehavior=_importQuestionBehavior - In the implementation block
@property (nonatomic,readonly) NSString * intentSlotName;                                //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,readonly) char allowsMultipleValues;                                //@synthesize allowsMultipleValues=_allowsMultipleValues - In the implementation block
@property (getter=isFixedSizeArray,nonatomic,readonly) char fixedSizeArray;              //@synthesize fixedSizeArray=_fixedSizeArray - In the implementation block
@property (nonatomic,readonly) char shouldAlignLabels;                                   //@synthesize shouldAlignLabels=_shouldAlignLabels - In the implementation block
+(id)allInsertableVariableTypes;
+(id)parameterWithDefinition:(id)arg1 ;
+(id)referencedActionResourceClasses;
-(NSString *)localizedDescription;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(NSString *)key;
-(NSDictionary *)definition;
-(NSString *)intentSlotName;
-(char)isFixedSizeArray;
-(NSString *)localizedPlaceholder;
-(NSString *)localizedLabel;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(Class)stateClass;
-(WFResourceManager *)resourceManager;
-(char)allowsMultipleValues;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(NSSet *)defaultSupportedVariableTypes;
-(void)addEventObserver:(id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(NSHashTable *)eventObservers;
-(char)displaysMultipleValueEditor;
-(char)parameterStateIsValid:(id)arg1 ;
-(Class)multipleStateClass;
-(NSString *)localizedPrompt;
-(NSSet *)supportedVariableTypes;
-(long long)arraySizeForWidgetSizeClass:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)attributesDidChange;
-(void)defaultSerializedRepresentationDidChange;
-(void)stateValidityCriteriaDidChange;
-(void)setLocalizedPrompt:(NSString *)arg1 ;
-(NSDictionary *)arraySizesBySizeClass;
-(NSString *)legacyKey;
-(char)doNotLocalizeValues;
-(id)defaultSerializedRepresentation;
-(char)isInsideWorkflow;
-(NSString *)importQuestionBehavior;
-(char)shouldAlignLabels;
-(NSSet *)disallowedVariableTypes;
-(void)setActionResources:(id)arg1 ;
@end

