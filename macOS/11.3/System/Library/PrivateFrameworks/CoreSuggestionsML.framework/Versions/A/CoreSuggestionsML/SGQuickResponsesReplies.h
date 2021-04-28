/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/Versions/A/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface SGQuickResponsesReplies : NSObject {

	NSArray* _models;
	NSArray* _semanticClasses;
	NSArray* _styleGroups;
	NSArray* _replyTexts;
	NSArray* _selectedPseudocounts;
	NSArray* _semanticClassReplyTextStrings;
	NSArray* _semanticClassSelectedPseudocounts;
	NSArray* _semanticClassParent;
	NSArray* _styleGroupParent;
	NSArray* _replyTextParent;
	NSArray* _categoryModels;
	NSArray* _categorySemanticClasses;
	NSArray* _categoryStyleGroups;
	NSArray* _semanticClassStyleGroups;
	NSArray* _semanticClassReplyTexts;
	NSArray* _styleGroupReplyTexts;
	NSSet* _replyTextsSet;

}

@property (nonatomic,readonly) NSArray * models;                                         //@synthesize models=_models - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClasses;                                //@synthesize semanticClasses=_semanticClasses - In the implementation block
@property (nonatomic,readonly) NSArray * styleGroups;                                    //@synthesize styleGroups=_styleGroups - In the implementation block
@property (nonatomic,readonly) NSArray * replyTexts;                                     //@synthesize replyTexts=_replyTexts - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPseudocounts;                           //@synthesize selectedPseudocounts=_selectedPseudocounts - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClassReplyTextStrings;                  //@synthesize semanticClassReplyTextStrings=_semanticClassReplyTextStrings - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClassSelectedPseudocounts;              //@synthesize semanticClassSelectedPseudocounts=_semanticClassSelectedPseudocounts - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClassParent;                            //@synthesize semanticClassParent=_semanticClassParent - In the implementation block
@property (nonatomic,readonly) NSArray * styleGroupParent;                               //@synthesize styleGroupParent=_styleGroupParent - In the implementation block
@property (nonatomic,readonly) NSArray * replyTextParent;                                //@synthesize replyTextParent=_replyTextParent - In the implementation block
@property (nonatomic,readonly) NSArray * categoryModels;                                 //@synthesize categoryModels=_categoryModels - In the implementation block
@property (nonatomic,readonly) NSArray * categorySemanticClasses;                        //@synthesize categorySemanticClasses=_categorySemanticClasses - In the implementation block
@property (nonatomic,readonly) NSArray * categoryStyleGroups;                            //@synthesize categoryStyleGroups=_categoryStyleGroups - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClassStyleGroups;                       //@synthesize semanticClassStyleGroups=_semanticClassStyleGroups - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClassReplyTexts;                        //@synthesize semanticClassReplyTexts=_semanticClassReplyTexts - In the implementation block
@property (nonatomic,readonly) NSArray * styleGroupReplyTexts;                           //@synthesize styleGroupReplyTexts=_styleGroupReplyTexts - In the implementation block
@property (nonatomic,readonly) NSSet * replyTextsSet;                                    //@synthesize replyTextsSet=_replyTextsSet - In the implementation block
+(id)nestedArrayFromFlatArray:(id)arg1 nestedIndexes:(id)arg2 ;
+(id)selectedPseudocountsFromModels:(id)arg1 ;
+(id)subclassesFromClasses:(id)arg1 subclassArray:(id)arg2 ;
+(id)categoryModelsFromModels:(id)arg1 ;
+(id)parentArraysFromNestedArray:(id)arg1 models:(id)arg2 ;
+(id)flattenedArraysFromNestedArray:(id)arg1 ;
+(id)indexedArraysFromNestedArray:(id)arg1 ;
+(id)nestedArrayFromModels:(id)arg1 ;
+(id)replyModelsForArray:(id)arg1 ;
+(char)isZeroBasedAndContiguous:(id)arg1 ;
+(id)modelSemanticClassesFromModels:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(NSArray *)models;
-(NSArray *)semanticClasses;
-(NSArray *)selectedPseudocounts;
-(NSArray *)styleGroups;
-(NSArray *)replyTexts;
-(NSArray *)semanticClassReplyTextStrings;
-(NSArray *)semanticClassSelectedPseudocounts;
-(NSArray *)semanticClassParent;
-(NSArray *)styleGroupParent;
-(NSArray *)replyTextParent;
-(NSArray *)categoryModels;
-(NSArray *)categorySemanticClasses;
-(NSArray *)categoryStyleGroups;
-(NSArray *)semanticClassStyleGroups;
-(NSArray *)semanticClassReplyTexts;
-(NSArray *)styleGroupReplyTexts;
-(NSSet *)replyTextsSet;
@end

