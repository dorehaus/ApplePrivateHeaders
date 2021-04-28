/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class DRSDampeningManagerMO;

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (assign,nonatomic) char enforcesResourceCap; 
@property (assign,nonatomic) char enforcesResourceDownsampling; 
@property (assign,nonatomic) char enforcesResourceHysteresis; 
@property (assign,nonatomic) char enforcesSignatureCap; 
@property (assign,nonatomic) char enforcesSignatureDownsampling; 
@property (assign,nonatomic) char enforcesSignatureHysteresis; 
@property (assign,nonatomic) char enforcesTotalCap; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end

