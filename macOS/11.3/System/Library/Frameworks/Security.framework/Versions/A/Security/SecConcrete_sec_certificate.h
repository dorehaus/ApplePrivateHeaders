/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Security.framework/Versions/A/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_certificate.h>

@class NSString;

@interface SecConcrete_sec_certificate : NSObject <OS_sec_certificate> {

	SecCertificateRef certificate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
@end

