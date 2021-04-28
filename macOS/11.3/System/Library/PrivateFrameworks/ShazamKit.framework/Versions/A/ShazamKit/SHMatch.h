/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SHSignature;

@interface SHMatch : NSObject <NSSecureCoding> {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (readonly) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (readonly) SHSignature * signature;              //@synthesize signature=_signature - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SHSignature *)signature;
-(NSArray *)mediaItems;
-(id)initWithMediaItems:(id)arg1 forSignature:(id)arg2 ;
-(char)containsMediaItemWithFuzzyTolerance:(id)arg1 ;
@end

