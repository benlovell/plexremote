//
//  TouchResponder.h
//  xbmcremote
//
//  Created by David Fumberger on 20/08/08.
//  Copyright 2008 collect3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h";
@interface TouchTableView : UITableView {
	BOOL pinching;
	float startTouchDistance;
	//BaseTableViewDelegate delegate;
//	UIViewController *controller;
}
//@property (nonatomic, retain) UIViewController *controller;
@end
