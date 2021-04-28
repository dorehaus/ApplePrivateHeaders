/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface RTStateModelLegacy : NSObject <NSSecureCoding> {

	long long _version;
	NSMutableDictionary* _stateModelLut;

}

@property (assign,nonatomic) long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateModelLut;              //@synthesize stateModelLut=_stateModelLut - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSMutableDictionary *)stateModelLut;
-(void)setStateModelLut:(NSMutableDictionary *)arg1 ;
@end

