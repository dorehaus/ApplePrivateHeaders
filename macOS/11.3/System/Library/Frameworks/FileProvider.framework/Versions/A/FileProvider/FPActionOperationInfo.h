/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FPActionOperationInfo : NSObject <NSSecureCoding> {

	char _attachSandboxExtensionsOnXPCEncoding;
	char __t_clientDrivenReader;
	unsigned _qos;
	NSString* _operationID;
	NSArray* _roots;
	unsigned long long __t_moveQueueWidth;

}

@property (nonatomic,copy) NSString * operationID;                                   //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSArray * roots;                                        //@synthesize roots=_roots - In the implementation block
@property (assign,nonatomic) char attachSandboxExtensionsOnXPCEncoding;              //@synthesize attachSandboxExtensionsOnXPCEncoding=_attachSandboxExtensionsOnXPCEncoding - In the implementation block
@property (assign,nonatomic) unsigned qos;                                           //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) unsigned long long _t_moveQueueWidth;                   //@synthesize _t_moveQueueWidth=__t_moveQueueWidth - In the implementation block
@property (assign,nonatomic) char _t_clientDrivenReader;                             //@synthesize _t_clientDrivenReader=__t_clientDrivenReader - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)qos;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setQos:(unsigned)arg1 ;
-(NSArray *)roots;
-(id)initWithOperationID:(id)arg1 roots:(id)arg2 ;
-(void)setAttachSandboxExtensionsOnXPCEncoding:(char)arg1 ;
-(void)setRoots:(NSArray *)arg1 ;
-(char)attachSandboxExtensionsOnXPCEncoding;
-(unsigned long long)_t_moveQueueWidth;
-(void)set_t_moveQueueWidth:(unsigned long long)arg1 ;
-(char)_t_clientDrivenReader;
-(void)set_t_clientDrivenReader:(char)arg1 ;
@end
