/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding> {

	char _shouldFilterExternalOriginatedDownloads;
	NSString* _persistenceIdentifier;

}

@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (assign,nonatomic) char shouldFilterExternalOriginatedDownloads;              //@synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)persistenceIdentifier;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(char)shouldFilterExternalOriginatedDownloads;
-(void)setShouldFilterExternalOriginatedDownloads:(char)arg1 ;
@end

