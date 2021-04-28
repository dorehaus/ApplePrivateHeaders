/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSArray * artwork; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) char POIBased; 
@property (nonatomic,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary;                             //@synthesize dictionary=_dictionary - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(NSString *)artistName;
-(NSArray *)artwork;
-(NSArray *)offers;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSArray *)categoryNames;
-(char)isPOIBased;
-(NSString *)itemKind;
-(long long)numberOfUserRatings;
-(long long)numberOfUserRatingsForCurrentVersion;
-(NSURL *)productPageURL;
-(float)userRating;
-(float)userRatingForCurrentVersion;
-(NSDictionary *)lookupDictionary;
-(NSNumber *)ITunesStoreIdentifier;
@end
