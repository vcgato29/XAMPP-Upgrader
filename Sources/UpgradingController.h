//
//  UpgradingController.h
//  XAMPP Upgrader
//
//  Created by Christian Speich on 30.09.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

extern NSString* XUWelcomeScreen;
extern NSString* XUProgressScreen;

@interface UpgradingController : NSWindowController {
	IBOutlet NSView*		contentView;
	IBOutlet NSView*		welcomeView;
	IBOutlet NSView*		progressView;
	NSDictionary*			views;
	
	/* Welcome View */
	IBOutlet NSTextView*	welcomeTextView;
	
	/* Progress View */
	IBOutlet NSProgressIndicator*progressIndicator;
	IBOutlet NSTextField*	progressText;
	IBOutlet NSTextField*	progressSubtext;
}

- (void) loadWelcomeView;
- (void) loadProgressView;
- (void) showView:(NSString*)view;

- (NSProgressIndicator*) progressIndicator;
- (NSTextField*) progressText;
- (NSTextField*) progressSubtext;

- (IBAction) startUpgrade:(id)sender;

@end
