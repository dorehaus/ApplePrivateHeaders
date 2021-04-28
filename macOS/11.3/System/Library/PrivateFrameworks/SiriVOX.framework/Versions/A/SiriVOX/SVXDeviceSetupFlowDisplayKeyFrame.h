/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SVXDeviceSetupFlowDisplayKeyFrame : NSObject <NSCopying, NSSecureCoding> {

	long long _keyFrameID;
	NSString* _text;
	double _offset;
	double _duration;

}

@property (nonatomic,readonly) long long keyFrameID;              //@synthesize keyFrameID=_keyFrameID - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) double duration;                   //@synthesize duration=_duration - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)offset;
-(double)duration;
-(NSString *)text;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithKeyFrameID:(long long)arg1 text:(id)arg2 offset:(double)arg3 duration:(double)arg4 ;
-(long long)keyFrameID;
@end

