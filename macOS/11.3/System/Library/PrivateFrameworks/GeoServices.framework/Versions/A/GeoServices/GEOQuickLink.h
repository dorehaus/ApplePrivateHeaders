/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDQuickLinkItem, NSString;

@interface GEOQuickLink : NSObject {

	GEOPDQuickLinkItem* _quickLinkItem;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSString * appAdamID; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) long long type; 
-(long long)type;
-(NSString *)bundleID;
-(NSString *)title;
-(id)initWithQuickLink:(id)arg1 ;
-(NSString *)URLString;
-(NSString *)appAdamID;
@end

