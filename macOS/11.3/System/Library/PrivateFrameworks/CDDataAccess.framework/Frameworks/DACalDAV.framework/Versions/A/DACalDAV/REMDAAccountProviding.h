/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/Versions/A/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, REMObjectID;


@protocol REMDAAccountProviding <NSObject>
@property (nonatomic,readonly) NSString * accountID; 
@property (nonatomic,readonly) REMObjectID * rem_accountObjectID; 
@property (nonatomic,readonly) NSString * accountDescription; 
@required
-(id)loggingDescription;
-(NSString *)accountID;
-(NSString *)accountDescription;
-(REMObjectID *)rem_accountObjectID;

@end

