/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/SPSearchEntity.h>

@class NSString;

@interface SPSearchAppEntity : SPSearchEntity {

	NSString* _appName;

}

@property (retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
-(id)queryString;
-(id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2 ;
-(char)isPeopleSearch;
-(id)tokenText;
-(void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 ;
@end
