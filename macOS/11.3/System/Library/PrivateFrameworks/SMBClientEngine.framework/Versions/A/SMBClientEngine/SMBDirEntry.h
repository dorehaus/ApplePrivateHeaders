/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SMBClientEngine.framework/Versions/A/SMBClientEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBClientEngine/SMBClientEngine-Structs.h>
@class NSString;

@interface SMBDirEntry : NSObject {

	unsigned _ntstatus;
	NSString* _name;
	smbfattr _attributes;

}

@property (assign) unsigned ntstatus;                //@synthesize ntstatus=_ntstatus - In the implementation block
@property (copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign) smbfattr attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(smbfattr)attributes;
-(void)setAttributes:(smbfattr)arg1 ;
-(unsigned)ntstatus;
-(void)setNtstatus:(unsigned)arg1 ;
@end
