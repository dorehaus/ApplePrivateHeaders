/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSClickGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSString;

@interface AKTapGestureRecognizer : NSClickGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	char _penGestureDetected;

}

@property (assign) char penGestureDetected;                         //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)setPenGestureDetected:(char)arg1 ;
-(char)penGestureDetected;
@end

