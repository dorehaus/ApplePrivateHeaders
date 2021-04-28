/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServicesExtensions.framework/Versions/A/AssetCacheServicesExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSString;

@interface AssetCacheAlert : NSObject {

	NSDate* _postDate;

}

@property (retain) NSDate * postDate;                                    //@synthesize postDate=_postDate - In the implementation block
@property (readonly) NSDictionary * externalRepresentation; 
@property (readonly) NSString * briefTitle; 
@property (readonly) NSString * briefText; 
@property (readonly) NSString * verboseTitle; 
@property (readonly) NSString * verboseText; 
@property (readonly) NSString * sharingPrefsAnchor; 
@property (readonly) double interval; 
+(id)_localizedStringForProperty:(id)arg1 ;
+(id)_localizedStringForRoute:(id)arg1 ;
+(id)_bundle;
+(id)alertWithExternalRepresentation:(id)arg1 ;
-(void)setPostDate:(NSDate *)arg1 ;
-(id)init;
-(double)interval;
-(NSDictionary *)externalRepresentation;
-(NSDate *)postDate;
-(id)initWithExternalRepresentation:(id)arg1 ;
-(NSString *)verboseTitle;
-(NSString *)verboseText;
-(NSString *)briefTitle;
-(NSString *)briefText;
-(NSString *)sharingPrefsAnchor;
@end

