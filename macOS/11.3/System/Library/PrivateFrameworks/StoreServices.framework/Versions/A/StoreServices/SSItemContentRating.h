/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, SSItemArtworkImage, NSString;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * contentRatingDictionary; 
@property (nonatomic,readonly) SSItemArtworkImage * ratingSystemLogo; 
@property (getter=isExplicitContent,nonatomic,readonly) char explicitContent; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (assign,nonatomic) long long ratingSystem; 
@property (getter=isRestricted,nonatomic,readonly) char restricted; 
@property (assign,nonatomic) char shouldHideWhenRestricted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)ratingSystemFromString:(id)arg1 ;
+(id)stringForRatingSystem:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)ratingLabel;
-(char)isRestricted;
-(id)valueForProperty:(id)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(char)isExplicitContent;
-(char)_isRatingSystemForApps:(long long)arg1 ;
-(char)_isRatingSystemForMovies:(long long)arg1 ;
-(char)_isRatingSystemForMusic:(long long)arg1 ;
-(char)_isRatingSystemForTV:(long long)arg1 ;
-(long long)ratingSystem;
-(void)setRatingSystem:(long long)arg1 ;
-(NSDictionary *)contentRatingDictionary;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
-(void)setShouldHideWhenRestricted:(char)arg1 ;
-(char)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
@end

