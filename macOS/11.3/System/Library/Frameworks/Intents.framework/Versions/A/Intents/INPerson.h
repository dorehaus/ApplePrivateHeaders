/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/INPersonExport.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;

@interface INPerson : NSObject <INCacheableContainer, INCodableAttributeRelationComparing, INKeyImageProducing, INImageProxyInjecting, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding> {

	NSString* _displayName;
	NSPersonNameComponents* _nameComponents;
	NSString* _userInput;
	NSArray* _aliases;
	long long _suggestionType;
	NSArray* _scoredAlternatives;
	char _isMe;
	NSString* _sourceAppBundleIdentifier;
	INPersonHandle* _personHandle;
	INImage* _image;
	NSString* _contactIdentifier;
	NSString* _customIdentifier;
	NSString* _relationship;
	NSString* _phonemeData;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * userIdentifier; 
@property (nonatomic,copy,readonly) NSString * userURIString; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSArray * aliases; 
@property (readonly) long long suggestionType; 
@property (readonly) INImage * _keyImage; 
@property (copy,readonly) NSArray * siriMatches; 
@property (readonly) char isMe; 
@property (readonly) NSString * spokenPhrase; 
@property (readonly) NSString * pronunciationHint; 
@property (readonly) NSString * vocabularyIdentifier; 
@property (readonly) NSArray * alternativeSpeakableMatches; 
@property (readonly) NSString * identifier; 
@property (copy) INPersonHandle * personHandle;                             //@synthesize personHandle=_personHandle - In the implementation block
@property (copy) NSPersonNameComponents * nameComponents;                   //@synthesize nameComponents=_nameComponents - In the implementation block
@property (copy) NSString * displayName; 
@property (copy) INImage * image;                                           //@synthesize image=_image - In the implementation block
@property (copy) NSString * contactIdentifier;                              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (copy) NSString * customIdentifier;                               //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (copy) NSString * relationship;                                   //@synthesize relationship=_relationship - In the implementation block
@property (copy) NSArray * aliases;                                         //@synthesize aliases=_aliases - In the implementation block
@property (assign) long long suggestionType;                                //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign) char isMe;                                               //@synthesize isMe=_isMe - In the implementation block
@property (copy) NSArray * alternatives; 
@property (copy) NSArray * scoredAlternatives;                              //@synthesize scoredAlternatives=_scoredAlternatives - In the implementation block
@property (copy) NSString * phonemeData;                                    //@synthesize phonemeData=_phonemeData - In the implementation block
@property (copy) NSString * sourceAppBundleIdentifier;                      //@synthesize sourceAppBundleIdentifier=_sourceAppBundleIdentifier - In the implementation block
@property (copy,readonly) NSArray * alternativeSiriMatches; 
@property (copy) NSString * handle; 
+(char)supportsSecureCoding;
+(id)toNilScoredPersons:(id)arg1 ;
+(id)expectedCNContactKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userIdentifier;
-(NSString *)identifier;
-(NSString *)displayName;
-(id)_displayName;
-(void)setImage:(INImage *)arg1 ;
-(NSString *)userName;
-(INImage *)image;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSArray *)alternatives;
-(NSString *)customIdentifier;
-(long long)suggestionType;
-(INPersonHandle *)personHandle;
-(NSString *)contactIdentifier;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)fullName;
-(NSString *)spokenPhrase;
-(id)_dictionaryRepresentation;
-(void)setHandle:(NSString *)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(NSString *)lastName;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(char)isMe;
-(void)setIsMe:(char)arg1 ;
-(NSArray *)aliases;
-(NSString *)relationship;
-(void)setSuggestionType:(long long)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(NSString *)vocabularyIdentifier;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(NSString *)userURIString;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)sourceAppBundleIdentifier;
-(void)setSourceAppBundleIdentifier:(NSString *)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(NSString *)pronunciationHint;
-(NSArray *)alternativeSpeakableMatches;
-(char)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)_aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(id)_userInput;
-(void)setPersonHandle:(INPersonHandle *)arg1 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(char)arg7 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(char)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(char)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(char)arg11 scoredAlternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 ;
-(NSArray *)alternativeSiriMatches;
-(NSArray *)scoredAlternatives;
-(void)setScoredAlternatives:(NSArray *)arg1 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8 ;
-(id)spokenPhrases;
-(id)_intents_indexingRepresentation;
-(NSArray *)siriMatches;
@end

