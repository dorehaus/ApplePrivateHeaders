/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMCopyEngineCopier.h>

@class SMWindowsMacPathMapper, SMWindowsComponent;

@interface SMCopyEngineWindowsCopier : SMCopyEngineCopier {

	id _context;
	SMWindowsMacPathMapper* _windowsMacPathMap;
	SMWindowsComponent* _windowsComponent;
	unsigned long long _quantityDataReceived;

}

@property (retain) SMWindowsComponent * windowsComponent;                   //@synthesize windowsComponent=_windowsComponent - In the implementation block
@property (assign) unsigned long long quantityDataReceived;                 //@synthesize quantityDataReceived=_quantityDataReceived - In the implementation block
@property (retain) id context;                                              //@synthesize context=_context - In the implementation block
@property (retain) SMWindowsMacPathMapper * windowsMacPathMap;              //@synthesize windowsMacPathMap=_windowsMacPathMap - In the implementation block
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(char)processReturningError:(id*)arg1 ;
-(void)setWindowsMacPathMap:(SMWindowsMacPathMapper *)arg1 ;
-(SMWindowsMacPathMapper *)windowsMacPathMap;
-(void)setWindowsComponent:(SMWindowsComponent *)arg1 ;
-(SMWindowsComponent *)windowsComponent;
-(void)setQuantityDataReceived:(unsigned long long)arg1 ;
-(char)copyComponent:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)copyPathForXMURLString:(id)arg1 sandboxed:(char)arg2 ;
-(unsigned long long)quantityDataReceived;
-(id)rootPathForUser:(id)arg1 sandboxed:(char)arg2 ;
-(char)createLocalizedDirectoryAtPath:(id)arg1 localizedName:(id)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(char)preProcessReturningError:(id*)arg1 ;
-(id)copyAction:(id)arg1 pathForXMURLString:(id)arg2 ;
-(void)copyAction:(id)arg1 updatedFile:(id)arg2 partialLength:(unsigned long long)arg3 ;
-(void)copyAction:(id)arg1 finishedFile:(id)arg2 length:(unsigned long long)arg3 ;
-(char)copyActionShouldFail:(id)arg1 ;
-(char)copyActionShouldContinue:(id)arg1 ;
@end

