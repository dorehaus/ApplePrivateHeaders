/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DDBinderInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	long long _score;
	id _value;
	int _valueType;
	char _NLPToken;
	char _topLevel;

}

@property (assign) char topLevel;              //@synthesize topLevel=_topLevel - In the implementation block
+(char)supportsSecureCoding;
-(char)NLPToken;
-(void)setNLPToken:(char)arg1 ;
-(id)monxmlAttributes;
-(void)dealloc;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(long long)score;
-(void)setScore:(long long)arg1 ;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(char)isDummy;
-(void)setTopLevel:(char)arg1 ;
-(char)topLevel;
@end
