/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKExtensionRegistry.h>

@class NSMutableDictionary, NSArray, NSString;

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _diagnosticLookup;

}

@property (nonatomic,retain) NSMutableDictionary * diagnosticLookup;              //@synthesize diagnosticLookup=_diagnosticLookup - In the implementation block
@property (nonatomic,readonly) NSArray * diagnostics; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)diagnostics;
-(Class)extensionClass;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)responseObjectClass;
-(NSMutableDictionary *)diagnosticLookup;
-(id)adapterForIdentifier:(id)arg1 ;
-(id)diagnosticForIdentifier:(id)arg1 ;
-(void)setDiagnosticLookup:(NSMutableDictionary *)arg1 ;
@end

