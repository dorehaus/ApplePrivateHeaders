/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TRIPBFileDescriptor : NSObject {

	NSString* package_;
	NSString* objcPrefix_;
	unsigned char syntax_;

}

@property (nonatomic,copy,readonly) NSString * package; 
@property (nonatomic,copy,readonly) NSString * objcPrefix; 
@property (nonatomic,readonly) unsigned char syntax; 
-(void)dealloc;
-(NSString *)package;
-(unsigned char)syntax;
-(id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2 ;
-(id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3 ;
-(NSString *)objcPrefix;
@end

