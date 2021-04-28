/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, INImage, NSNumber, NSDictionary;

@interface _PSSuggestion : NSObject <NSSecureCoding> {

	char _familySuggestion;
	char _isAdaptedModelCreated;
	char _isAdaptedModelUsed;
	NSString* _conversationIdentifier;
	NSString* _groupName;
	NSArray* _recipients;
	NSString* _bundleID;
	INImage* _image;
	NSString* _derivedIntentIdentifier;
	NSNumber* _score;
	NSString* _adaptedModelRecipeID;
	NSString* _supportedBundleIDs;
	NSString* _utiList;
	NSDictionary* _modelSuggestionProxies;
	NSString* _reason;
	NSString* _reasonType;
	NSString* _trialID;

}

@property (nonatomic,copy,readonly) NSString * derivedIntentIdentifier;              //@synthesize derivedIntentIdentifier=_derivedIntentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;                                //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) char familySuggestion;                                //@synthesize familySuggestion=_familySuggestion - In the implementation block
@property (assign,nonatomic) char isAdaptedModelCreated;                             //@synthesize isAdaptedModelCreated=_isAdaptedModelCreated - In the implementation block
@property (assign,nonatomic) char isAdaptedModelUsed;                                //@synthesize isAdaptedModelUsed=_isAdaptedModelUsed - In the implementation block
@property (nonatomic,retain) NSString * adaptedModelRecipeID;                        //@synthesize adaptedModelRecipeID=_adaptedModelRecipeID - In the implementation block
@property (nonatomic,retain) NSString * supportedBundleIDs;                          //@synthesize supportedBundleIDs=_supportedBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * utiList;                                     //@synthesize utiList=_utiList - In the implementation block
@property (nonatomic,retain) NSDictionary * modelSuggestionProxies;                  //@synthesize modelSuggestionProxies=_modelSuggestionProxies - In the implementation block
@property (nonatomic,copy) NSString * reason;                                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * reasonType;                                    //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,copy) NSString * trialID;                                       //@synthesize trialID=_trialID - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationIdentifier;               //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;                            //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) INImage * image;                                      //@synthesize image=_image - In the implementation block
+(char)supportsSecureCoding;
+(id)suggestionForBundleID:(id)arg1 derivedIntentIdentifier:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)bundleID;
-(NSNumber *)score;
-(INImage *)image;
-(NSString *)groupName;
-(NSString *)conversationIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(NSString *)derivedIntentIdentifier;
-(NSDictionary *)modelSuggestionProxies;
-(NSString *)adaptedModelRecipeID;
-(char)isAdaptedModelCreated;
-(char)isAdaptedModelUsed;
-(NSString *)supportedBundleIDs;
-(NSString *)reasonType;
-(void)setReasonType:(NSString *)arg1 ;
-(void)setTrialID:(NSString *)arg1 ;
-(NSString *)trialID;
-(void)setModelSuggestionProxies:(NSDictionary *)arg1 ;
-(void)setIsAdaptedModelCreated:(char)arg1 ;
-(void)setIsAdaptedModelUsed:(char)arg1 ;
-(void)setAdaptedModelRecipeID:(NSString *)arg1 ;
-(void)setUtiList:(NSString *)arg1 ;
-(void)setSupportedBundleIDs:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(char)familySuggestion;
-(NSString *)utiList;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 score:(id)arg7 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 familySuggestion:(char)arg10 ;
@end

