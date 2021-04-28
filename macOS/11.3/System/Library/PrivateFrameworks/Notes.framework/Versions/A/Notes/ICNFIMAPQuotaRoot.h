/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ICNFMCQuotaUsage;

@interface ICNFIMAPQuotaRoot : NSObject {

	NSString* _name;
	ICNFMCQuotaUsage* _usage;

}

@property (copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (retain) ICNFMCQuotaUsage * usage;              //@synthesize usage=_usage - In the implementation block
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setUsage:(ICNFMCQuotaUsage *)arg1 ;
-(ICNFMCQuotaUsage *)usage;
-(void)setUsageFromResponse:(id)arg1 ;
@end

