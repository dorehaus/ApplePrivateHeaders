/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary;

@interface VNDetectionprint : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	NSDictionary* _tensorsDictionary;
	unsigned long long _requestRevision;

}

@property (nonatomic,readonly) unsigned long long requestRevision; 
+(char)supportsSecureCoding;
+(id)knownTensorKeysForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(id)tensorForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithTensorsDictionary:(id)arg1 requestRevision:(unsigned long long)arg2 ;
@end

