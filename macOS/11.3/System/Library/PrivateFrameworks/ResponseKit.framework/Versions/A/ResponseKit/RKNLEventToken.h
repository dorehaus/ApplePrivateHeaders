/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RKNLEventToken : NSObject {

	unsigned _tokenID;
	NSString* _string;
	long long _location;
	long long _length;

}

@property (retain) NSString * string;               //@synthesize string=_string - In the implementation block
@property (assign) unsigned tokenID;                //@synthesize tokenID=_tokenID - In the implementation block
@property (assign) long long location;              //@synthesize location=_location - In the implementation block
@property (assign) long long length;                //@synthesize length=_length - In the implementation block
-(NSString *)string;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(long long)location;
-(unsigned)tokenID;
-(void)setLocation:(long long)arg1 ;
-(void)setTokenID:(unsigned)arg1 ;
-(id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3 ;
@end

