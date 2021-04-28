/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSVSystemDialogTextField : NSObject {

	char _secure;
	NSString* _title;
	long long _keyboardType;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,getter=isSecure,nonatomic) char secure;              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long keyboardType;                   //@synthesize keyboardType=_keyboardType - In the implementation block
+(id)textFieldWithTitle:(id)arg1 secure:(char)arg2 ;
+(id)textFieldWithTitle:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)keyboardType;
-(NSString *)title;
-(char)isSecure;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSecure:(char)arg1 ;
@end

