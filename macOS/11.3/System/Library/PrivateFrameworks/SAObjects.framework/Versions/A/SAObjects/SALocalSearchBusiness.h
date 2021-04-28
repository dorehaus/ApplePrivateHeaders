/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSDictionary, NSURL, NSArray, NSString, NSDate, SALocalSearchRating;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * businessId; 
@property (nonatomic,copy) NSDictionary * businessIds; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * openingHours; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSURL * photo; 
@property (nonatomic,retain) SALocalSearchRating * rating; 
@property (nonatomic,copy) NSArray * reviews; 
@property (assign,nonatomic) long long totalNumberOfReviews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)business;
+(id)businessWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)phoneNumbers;
-(void)setRating:(SALocalSearchRating *)arg1 ;
-(SALocalSearchRating *)rating;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(NSArray *)reviews;
-(void)setPhoto:(NSURL *)arg1 ;
-(NSURL *)photo;
-(NSArray *)categories;
-(void)setReviews:(NSArray *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
-(id)encodedClassName;
-(NSDictionary *)businessIds;
-(void)setBusinessIds:(NSDictionary *)arg1 ;
-(NSURL *)businessUrl;
-(void)setBusinessUrl:(NSURL *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(NSString *)openingHours;
-(void)setOpeningHours:(NSString *)arg1 ;
-(long long)totalNumberOfReviews;
-(void)setTotalNumberOfReviews:(long long)arg1 ;
@end

