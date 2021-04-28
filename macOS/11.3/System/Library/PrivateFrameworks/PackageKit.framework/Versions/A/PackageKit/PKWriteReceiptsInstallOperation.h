/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKWriteReceiptsInstallOperation : PKInstallOperation {

	PKPackageSpecifier* _currentPackageSpecifier;
	char _inSandbox;

}
-(id)currentPackageSpecifier;
-(id)messageTracerDomain;
-(id)messageTracerComment;
-(id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 writeInSandbox:(char)arg4 ;
-(char)_shouldWriteReceiptForPackageSpecifier:(id)arg1 ;
-(id)_newMasterBOMIfEnabled;
-(char)_saveReceiptForPackageSpecifier:(id)arg1 withMasterBOM:(id)arg2 error:(id*)arg3 ;
-(int)installState;
-(void)main;
@end

