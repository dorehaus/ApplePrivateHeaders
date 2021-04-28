/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/Versions/A/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AACCore/AACCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface AEAssessmentState : NSObject <NSSecureCoding, NSCopying> {

	char _enabled;
	NSURL* _publisherBundleURL;

}

@property (getter=isEnabled,nonatomic,readonly) char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSURL * publisherBundleURL;                 //@synthesize publisherBundleURL=_publisherBundleURL - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEnabled;
-(id)initWithEnabled:(char)arg1 publisherBundleURL:(id)arg2 ;
-(NSURL *)publisherBundleURL;
@end

