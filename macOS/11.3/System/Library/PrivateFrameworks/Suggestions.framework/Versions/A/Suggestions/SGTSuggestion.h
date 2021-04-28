/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Suggestions/Suggestions-Structs.h>
@class SGTSuggestionReserved, NSImage, NSString, NSArray, NSURL, SGTQueryGenius, NSIndexSet, SGTCategory;

@interface SGTSuggestion : NSObject {

	SGTSuggestionReserved* _reserved;

}

@property (readonly) NSImage * tokenImage; 
@property (readonly) NSString * tokenTitle; 
@property (readonly) NSImage * imageForMenu; 
@property (readonly) NSString * displayNameForMenu; 
@property (readonly) long long scopeForUI; 
@property (readonly) NSString * suggestionDebugDescription; 
@property (assign,nonatomic) char lastWordMatch; 
@property (nonatomic,readonly) unsigned long long alignmentScore; 
@property (assign,nonatomic) char intermediateResult; 
@property (assign,nonatomic) char forceLastPosition; 
@property (assign,nonatomic) char enforceStrictMatch; 
@property (assign) char exactMatch; 
@property (readonly) NSString * displayName; 
@property (readonly) NSArray * attributeNames; 
@property (readonly) NSArray * attributeValues; 
@property (retain) id representedObject; 
@property (copy) NSURL * spotlightScope; 
@property (assign) double score; 
@property (readonly) NSString * queryStringFragment; 
@property (readonly) char isTopHit; 
@property (retain) SGTQueryGenius * genius; 
@property (readonly) NSIndexSet * scopes; 
@property (assign) long long scope; 
@property (readonly) long long defaultScope; 
@property (retain) SGTCategory * category; 
@property (copy) NSIndexSet * titleHighlights; 
@property (copy) NSIndexSet * uniquifierHighlights; 
@property (copy) NSString * inputString; 
+(id)fuzzyAttributesSet;
+(id)queryStringForSuggestions:(id)arg1 ;
+(id)queryScopesForSuggestions:(id)arg1 ;
+(id)searchPhraseForSuggestions:(id)arg1 ;
+(id)keyPathsForValuesAffectingQueryStringFragment;
+(id)suggestionWithDisplayName:(id)arg1 ;
+(id)keyPathsForValuesAffectingSuggestionScopeDescription;
+(id)keyPathsForValuesAffectingTokenImage;
+(id)keyPathsForValuesAffectingTokenTitle;
+(id)keyPathsForValuesAffectingScopeForUI;
+(id)keyPathsForValuesAffectingSuggestionDebugDescription;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)_identifier;
-(NSString *)displayName;
-(void)setRepresentedObject:(id)arg1 ;
-(SGTCategory *)category;
-(void)setCategory:(SGTCategory *)arg1 ;
-(double)score;
-(NSArray *)attributeNames;
-(id)representedObject;
-(void)_setDisplayName:(id)arg1 ;
-(NSRange)_replacementRange;
-(id)_propertyListRepresentation;
-(long long)scope;
-(void)setScore:(double)arg1 ;
-(NSIndexSet *)scopes;
-(unsigned long long)alignmentScore;
-(void)setScope:(long long)arg1 ;
-(long long)_suggestionType;
-(long long)defaultScope;
-(NSString *)inputString;
-(char)isTopHit;
-(char)isEqualToSuggestion:(id)arg1 ;
-(SGTQueryGenius *)genius;
-(void)setGenius:(SGTQueryGenius *)arg1 ;
-(NSURL *)spotlightScope;
-(char)intermediateResult;
-(char)forceLastPosition;
-(char)enforceStrictMatch;
-(NSIndexSet *)titleHighlights;
-(NSIndexSet *)uniquifierHighlights;
-(NSString *)queryStringFragment;
-(id)initWithDisplayName:(id)arg1 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 trimDisplayName:(char)arg3 values:(id)arg4 additionalAttributes:(id)arg5 representedObject:(id)arg6 score:(double)arg7 lastWordMatched:(char)arg8 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 trimDisplayName:(char)arg3 values:(id)arg4 additionalAttributes:(id)arg5 representedObject:(id)arg6 score:(double)arg7 lastWordMatched:(char)arg8 alignmentScore:(unsigned long long)arg9 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 trimDisplayName:(char)arg3 values:(id)arg4 additionalAttributes:(id)arg5 representedObject:(id)arg6 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 trimDisplayName:(char)arg3 values:(id)arg4 additionalAttributes:(id)arg5 representedObject:(id)arg6 score:(double)arg7 ;
-(id)initWithAttributeNames:(id)arg1 displayName:(id)arg2 values:(id)arg3 additionalAttributes:(id)arg4 representedObject:(id)arg5 ;
-(char)attributeName:(id)arg1 isValidForScope:(long long)arg2 ;
-(id)_queryStringForAttributeName:(id)arg1 values:(id)arg2 ;
-(id)_queryStringForAttributeName:(id)arg1 values:(id)arg2 disableNLProcessing:(char)arg3 ;
-(id)_queryStringForSuggestionUseRawQuery:(char)arg1 ;
-(NSArray *)attributeValues;
-(id)_originalTypedString;
-(id)_queryStringForAttributeNames:(id)arg1 values:(id)arg2 scope:(long long)arg3 ;
-(id)displayNameForScope:(long long)arg1 ;
-(long long)scopeForAttributeName:(id)arg1 ;
-(void)_setReplacementRange:(NSRange)arg1 ;
-(void)_setOriginalTypedString:(id)arg1 ;
-(id)_shorterDisplayName;
-(void)_setUniquifierString:(id)arg1 ;
-(id)_uniquifierString;
-(void)_setShowsUniquifier:(char)arg1 ;
-(char)_showsUniquifier;
-(void)setTitleHighlights:(NSIndexSet *)arg1 ;
-(void)setUniquifierHighlights:(NSIndexSet *)arg1 ;
-(void)setInputString:(NSString *)arg1 ;
-(id)allAttributeValues;
-(id)valuesForAttributeWithName:(id)arg1 ;
-(void)setSpotlightScope:(NSURL *)arg1 ;
-(char)lastWordMatch;
-(void)setLastWordMatch:(char)arg1 ;
-(void)_setRawQueryString:(id)arg1 ;
-(id)_rawQueryString;
-(void)_setAdditionalRawQuery:(id)arg1 ;
-(void)_setAdditionalRawQueryIsOr:(char)arg1 ;
-(id)_additionalRawQuery;
-(char)_additionalRawQueryIsOr;
-(id)suggestionScopeDescription;
-(char)_shouldNotBeIncludedInRecents;
-(char)_isTopHitCandidate;
-(void)_setIsTopHitCandidate:(char)arg1 ;
-(char)_isRecent;
-(void)_setIsRecent:(char)arg1 ;
-(void)_setSuggestionType:(long long)arg1 ;
-(void)setIntermediateResult:(char)arg1 ;
-(void)setForceLastPosition:(char)arg1 ;
-(void)setEnforceStrictMatch:(char)arg1 ;
-(char)exactMatch;
-(void)setExactMatch:(char)arg1 ;
-(NSString *)displayNameForMenu;
-(NSImage *)imageForMenu;
-(long long)scopeForUI;
-(NSImage *)tokenImage;
-(NSString *)tokenTitle;
-(id)_accessibilityDisplayName;
-(NSString *)suggestionDebugDescription;
@end
