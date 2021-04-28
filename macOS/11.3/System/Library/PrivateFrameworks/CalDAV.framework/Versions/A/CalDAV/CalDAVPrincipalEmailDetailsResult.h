/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSURL* _principalURL;
	NSString* _displayName;
	NSSet* _preferredAddresses;

}

@property (nonatomic,retain) NSURL * principalURL;                    //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * preferredAddresses;              //@synthesize preferredAddresses=_preferredAddresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(id)addresses;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSSet *)preferredAddresses;
-(void)setPreferredAddresses:(NSSet *)arg1 ;
@end

