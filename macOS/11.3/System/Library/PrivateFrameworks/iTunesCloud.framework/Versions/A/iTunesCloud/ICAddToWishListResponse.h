/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface ICAddToWishListResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSString * message; 
-(id)description;
-(NSString *)message;
-(long long)statusCode;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

