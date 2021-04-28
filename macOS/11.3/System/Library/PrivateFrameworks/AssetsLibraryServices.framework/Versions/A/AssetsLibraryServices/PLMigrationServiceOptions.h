/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _option;
	NSString* _clientBundleId;
	NSString* _suggestedDestinationName;

}

@property (readonly) NSString * clientBundleId;                    //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (copy) NSString * suggestedDestinationName;              //@synthesize suggestedDestinationName=_suggestedDestinationName - In the implementation block
@property (assign) unsigned short option;                          //@synthesize option=_option - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientBundleId;
-(char)isPMSOption:(unsigned short)arg1 ;
-(id)nameForOption:(unsigned short)arg1 ;
-(NSString *)suggestedDestinationName;
-(void)setSuggestedDestinationName:(NSString *)arg1 ;
-(unsigned short)option;
-(void)setOption:(unsigned short)arg1 ;
@end

